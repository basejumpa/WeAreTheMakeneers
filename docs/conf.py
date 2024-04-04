# -*- coding: utf-8 -*-
"""Sphinx configuration file."""

from setuptools_scm import get_version

# -- Project information -----------------------------------------------------
# @see https://www.sphinx-doc.org/en/master/usage/configuration.html#project-information

project = 'Willi-Makers'

version = get_version(root='..', relative_to=__file__)
release = version

author = 'Alexander Mann-Wahrenberg'
copyright = f"2024, {author}"


# -- General configuration ---------------------------------------------------
# @see https://www.sphinx-doc.org/en/master/usage/configuration.html#general-configuration
# @see https://www.sphinx-doc.org/en/master/development/tutorials/helloworld.html

extensions = [
    'sphinx.ext.githubpages',       # @see https://www.sphinx-doc.org/en/master/usage/extensions/githubpages.html
    'sphinx_design',                # @see https://sphinx-design.readthedocs.io/en/latest/get_started.html
]

exclude_patterns = [
    'README.rst',
]


# -- Options for HTML output with theme "sphinx_material" -------------------
# @see https://www.sphinx-doc.org/en/master/usage/configuration.html#options-for-html-output
# @see https://bashtage.github.io/sphinx-material/customization.html

html_title = f"Willi-Makers {version}" 
#html_logo  = '_figures/logo.svg'

# Hide hyper link which leeds to the source of page displayed
html_show_sourcelink = False

html_sidebars = {
    "**": ["logo-text.html", "globaltoc.html", "localtoc.html", "searchbox.html"]
}

html_theme = 'sphinx_material'

html_theme_options = {
    'nav_title'    : f"Willi-Makers",
    'base_url'     : 'https://basejumpa.github.io/willi-makers',
    
    'repo_url'     : 'https://github.com/basejumpa/willi-makers',
    'repo_name'    : 'willi-makers',
    
    'color_primary': 'teal',
    'color_accent' : 'yellow',
    
    'globaltoc_depth'        : 3,
    'globaltoc_collapse'     : 'true',
    'globaltoc_includehidden': 'true',
}

### Add copy-to-clipboard button to codeblocks ################################
# @see https://sphinx-copybutton.readthedocs.io

extensions.append("sphinx_copybutton")

#EOF
