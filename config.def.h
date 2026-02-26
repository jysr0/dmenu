/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */

// fuzzymatch
static int fuzzy  = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching */

// no input
static int draw_input = 1;                  /* -noi option; if 0, the input will not be drawn by default */

// center
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */

// alpha
static const unsigned int alpha = 0xff;     /* Amount of opacity. 0xff is opaque             */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"CaskaydiaMono NFM:style=Light:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                        fg         bg       */
	[SchemeNorm]          = { "#bbbbbb", "#222222" },
	[SchemeSel]           = { "#eeeeee", "#770000" },
	[SchemeSelHighlight]  = { "#ffc978", "#770000" },
	[SchemeNormHighlight] = { "#ffc978", "#222222" },
	[SchemeOut]           = { "#000000", "#00ffff" },
	[SchemeBorder]        = { "#770000", NULL },
	[SchemeCaret]         = { "#eeeeee", "#222222" },

	// gruvbox
	//[SchemeNorm]          = { "#ebdbb2", "#282828" },
	//[SchemeSel]           = { "#ebdbb2", "#98971a" },
	//[SchemeOut]           = { "#ebdbb2", "#8ec07c" },
	//[SchemeSelHighlight]  = { "#ffc978", "#770000" },
	//[SchemeNormHighlight] = { "#ffc978", "#282828" },
	//[SchemeBorder]        = { "#770000", NULL },
	//[SchemeCaret]         = { "#111111", "#dddddd" },
};

// alpha
static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm]          = { OPAQUE, alpha },
	[SchemeSel]           = { OPAQUE, alpha },
	[SchemeSelHighlight]  = { OPAQUE, alpha },
	[SchemeNormHighlight] = { OPAQUE, alpha },
	[SchemeOut]           = { OPAQUE, alpha },
	[SchemeBorder]        = { OPAQUE, alpha },
	[SchemeCaret]         = { OPAQUE, alpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 15;

// navhistory
static unsigned int maxhist    = 64;

/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

// preselect
/* -n option; preselected item starting from 0 */
static unsigned int preselected = 0;

// border
/* Size of the window border */
static unsigned int border_width = 2;
