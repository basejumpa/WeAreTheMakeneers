###############################################################################
# Entry points for docs-as-code framework                                     #
###############################################################################

### CONFIGURATION #############################################################
# You can set these variables from the command line, and also
# from the environment for the first two.

DOC_CFG_SOURCE_DIR       ?= docs
DOC_CFG_CONFIG_DIR       ?= docs
DOC_CFG_BUILD_DIR        ?= out/docs
GIT_BRANCH               := $(or $(branch),$(shell git branch --show-current),branch-is-unknown)
DOC_CFG_HTML_LIVE_PORT   ?= 2024

### IMPLEMENTATION ############################################################

define HELP_SCREEN
Usage: make -f doc/Makefile <target>
Make target for working with the documentation

Known targets are are:

        install       : (Re)-install necessary development environment.
                        The environment is being installed in a virtual environment in subfolder .venv/ of the
                        local repository folder.
                        All tools except Latex, necessary for command build-pdf are installed.

        html-live     : Continuous (re-)build of HTML output.
                        Rebuild is being triggered by file changes inside folder DOC_CFG_BUILD_DIR. Start local webserver.
        html          : Make documentation in HTML format
        pdf           : Make documentation in PDF format
                        Additional prerequisite is, beside having performed ./doc.sh install, are (installed and in path):
                        - Miktex (Latex) distribution

        clean         : Clean build output folder (default: out/docs)

        clean-install : Remove complete installation (located in .venv/)
                        Next other command will re-install tools.

        help          : Show this screen

    Commands to be implemented:
        publish       : Publish documentation to a place accessable by readers

    Environment variables used:
        DOC_CFG_SOURCE_DIR        : Directory of documentation's source files
                                    Absolute or relative to working directory
                                    Default: docs
        DOC_CFG_BUILD_DIR         : Build output directory
                                    Absolute or relative to working directory
                                    Depending on html-live, make-html, make-pdf there
                                    Create a subdirectory accordingly (html-live, html, ...)
                                    Default: out/docs
        DOC_CFG_HTML_LIVE_PORT    : The TCP/IP port of the local webserver when viewing html live.
                                    Default: 2024
endef

# Always invoke one shell for all lines in a recipe
# @see https://www.gnu.org/software/make/manual/html_node/One-Shell.html
.ONESHELL:


ifeq ($(OS),Windows_NT)
SHELL = git-bash
else
SHELL = /bin/bash
endif

PYTHON = python3

# Disable all implicit targets
MAKEFLAGS += --no-builtin-rules
.SUFFIXES:

# Enable parallel execution (where possible)
MAKEFLAGS += ---jobs=5

.DEFAULT: help

.PHONY: help
help:
	$(info $(HELP_SCREEN))

.PHONY: install
install: clean-install .tools/.are-up-to-date

.tools/.are-up-to-date:
	$(PYTHON) -m pipx install poetry
	export PATH="$$PATH:$$HOME/.local/bin" # Works for root. Not tested for other users.
	mkdir .tools/
	curl -L -o .tools/plantuml.jar https://github.com/plantuml/plantuml/releases/download/v1.2024.5/plantuml-1.2024.5.jar
	touch .tools/.are-up-to-date

.PHONY: deps-are-up-to-date
deps-are-up-to-date: poetry.toml pyproject.toml
	poetry update

.PHONY: deps-are-up-to-date-live
deps-are-up-to-date-live: poetry.toml pyproject.toml
	poetry update --with dev

clean-install:
	rm -rf .venv/
	rm -rf .tools/
	rm -f  poetry.lock

.PHONY: clean
clean:
	rm -rf "$(DOC_CFG_BUILD_DIR)"

.PHONY: html-live
html-live: .tools/.are-up-to-date deps-are-up-to-date-live
	mkdir -p "$(DOC_CFG_BUILD_DIR)/$@"
	# Start continuous build, open browser automatically which reloads on change.
	@echo "Building sources at $(DOC_CFG_SOURCE_DIR)"
	poetry run sphinx-autobuild \
        -W \
        -c "$(DOC_CFG_CONFIG_DIR)" \
        --watch $(DOC_CFG_CONFIG_DIR) \
        "$(DOC_CFG_SOURCE_DIR)" \
        "$(DOC_CFG_BUILD_DIR)/$@" \
        --re-ignore '_tags/.*' \
        --port "$(DOC_CFG_HTML_LIVE_PORT)" \
        --open-browser

.PHONY: html
html: .tools/.are-up-to-date deps-are-up-to-date
	mkdir -p "$(DOC_CFG_BUILD_DIR)/$@"
	@echo "Building sources at $(DOC_CFG_SOURCE_DIR)"
	poetry run sphinx-build \
        -W \
        -c "$(DOC_CFG_CONFIG_DIR)" \
        "$(DOC_CFG_SOURCE_DIR)" \
        "$(DOC_CFG_BUILD_DIR)/$@"


#EOF
