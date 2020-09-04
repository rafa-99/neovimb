/* features */
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
#define SETTING_HOME_PAGE                     "about:blank"

#define MAXIMUM_HINTS              500
/* default window dimensions */
#define WIN_WIDTH                  800
#define WIN_HEIGHT                 600

/* if set to 1 neovimb will check if the webextension could be found. */
#define CHECK_WEBEXTENSION_ON_STARTUP 1

/* default download folder */
#define DLPATH "~/Downloads"

/* cookies policy
 * -> always
 * -> origin
 * -> never
 */
#define COOKIES "always"

/* default user agent */
#define USERAGENT "Mozilla/5.0 (X11; Linux x86_64; rv:79.0) Gecko/20100101 Firefox/79.0"

/* default bar settings */

// background color -/- font color
#define BARCOLOR "background-color:#282828;color:#888888;"
#define INPUTBARCOLOR "background-color:#141414;color:#888888;font:"
