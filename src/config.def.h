/**
 * vimb - a webkit based vim like browser.
 *
 * Copyright (C) 2012-2018 Daniel Carl
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see http://www.gnu.org/licenses/.
 */

/* graphical features */
/* show wget style progressbar in status bar */
#define FEATURE_WGET_PROGRESS_BAR
/* show load progress in window title */
#define FEATURE_TITLE_PROGRESS
/* show page title in url completions */
#define FEATURE_TITLE_IN_COMPLETION
/* enable the read it later queue */
#define FEATURE_QUEUE
/* disable X window embedding */
/* #define FEATURE_NO_XEMBED */

#ifdef FEATURE_WGET_PROGRESS_BAR
/* chars to use for the progressbar */
#define PROGRESS_BAR             "=> "
#define PROGRESS_BAR_LEN            20
#endif
#define FEATURE_AUTOCMD

/* time in seconds after that message will be removed from inputbox if the
 * message where only temporary */
#define MESSAGE_TIMEOUT             5

/* number of chars to be shown in statusbar for ambiguous commands */
#define SHOWCMD_LEN                 10
/* css applied to the gui elements regardless of user's settings */
#define GUI_STYLE_CSS_BASE          "#input text{background-color:inherit;color:inherit;caret-color:@color;font:inherit;}"

/* default font size for fonts in webview */
#define SETTING_DEFAULT_FONT_SIZE             16
#define SETTING_DEFAULT_MONOSPACE_FONT_SIZE   13
#define SETTING_GUI_FONT_NORMAL               "10pt monospace"
#define SETTING_GUI_FONT_EMPH                 "bold 10pt monospace"
#define SETTING_COMPLETION_CSS                "color:#ffffff;background-color:#656565;font:" SETTING_GUI_FONT_NORMAL
#define SETTING_COMPLETION_HOVER_CSS          "background-color:#777777;"
#define SETTING_COMPLETION_SELECTED_CSS       "color:#f6f3e8;background-color:#888888;"
#define SETTING_INPUT_CSS                     "background-color:#ffffff;color:#000000;font:" SETTING_GUI_FONT_NORMAL
#define SETTING_INPUT_ERROR_CSS               "background-color:#ff7777;font:" SETTING_GUI_FONT_EMPH
#define SETTING_STATUS_CSS                    "color:#ffffff;background-color:#000000;font:" SETTING_GUI_FONT_EMPH
#define SETTING_STATUS_SSL_CSS                "background-color:#95e454;color:#000000;"
#define SETTING_STATUS_SSL_INVLID_CSS         "background-color:#ff7777;color:#000000;"

/* hide input bar automatically */
#define SETTING_HIDEINPUTBAR on

#define MAXIMUM_HINTS              500
/* default window dimensions */
#define WIN_WIDTH                  800
#define WIN_HEIGHT                 600
/* dark mode */
#define SETTING_DARK_MODE on

/* browser features */
/* if set to 1 neovimb will check if the webextension could be found. */
#define CHECK_WEBEXTENSION_ON_STARTUP 1
/* download folder */
#define SETTING_DOWNLOAD_PATH "~/Downloads"
/* home page */
#define SETTING_HOME_PAGE "about:blank"
/* search engine */
#define SETTING_SEARCH_ENGINE "https://duckduckgo.com/?q=$0"
/* user agent */
#define SETTING_USER_AGENT "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/605.1.15 (KHTML, like Gecko) Version/11.0 Safari/605.1.15 "
/* geolocation-accept allowed values always, ask, never */
#define SETTING_GEOLOCATION_ACCEPT "never"
/* cookie-accept allowed values always, origin, never */
#define SETTING_COOKIE_ACCEPT "never"
/* javascript */
#define SETTING_JAVASCRIPT_ACCEPT on
/* download command */
#define SETTING_DOWNLOAD_COMMAND "/bin/sh -c \"curl -sLJOC - -e '$neovimb_URI' %s\""

#define SETTING_HINT_KEYS "0123456789"
