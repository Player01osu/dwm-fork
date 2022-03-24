
/* See LICENSE file for copyright and license details. */

/* appearance */
static const unsigned int borderpx       = 5;   /* border pixel of windows */
static const unsigned int snap           = 32;  /* snap pixel */
static const unsigned int gappih         = 11;  /* horiz inner gap between windows */
static const unsigned int gappiv         = 11;  /* vert inner gap between windows */
static const unsigned int gappoh         = 12;  /* horiz outer gap between windows and screen edge */
static const unsigned int gappov         = 12;  /* vert outer gap between windows and screen edge */
static const int smartgaps_fact          = 1;   /* gap factor when there is only one client; 0 = no gaps, 3 = 3x outer gaps */
static const char autostartblocksh[]     = "autostart_blocking.sh";
static const char autostartsh[]          = "autostart.sh";
static const char dwmdir[]               = "dwm";
static const char localshare[]           = ".local/share";
static const int showbar                 = 1;   /* 0 means no bar */
static const int topbar                  = 1;   /* 0 means bottom bar */
static const int vertpad            = 0;       /* vertical padding of bar */
static const int sidepad            = 0;       /* horizontal padding of bar */
/* Status is to be shown on: -1 (all monitors), 0 (a specific monitor by index), 'A' (active monitor) */
static const int statusmon               = -1;

/* Indicators: see patch/bar_indicators.h for options */
// static int tagindicatortype              = INDICATOR_TOP_LEFT_SQUARE;
// static int floatindicatortype            = INDICATOR_TOP_LEFT_SQUARE;
static int tagindicatortype              = INDICATOR_TOP_BAR_SLIM;
//static int tiledindicatortype            = INDICATOR_TOP_BAR_SLIM;
//static int tagindicatortype              = INDICATOR_NONE;
static int tiledindicatortype            = INDICATOR_NONE;
static int floatindicatortype            = INDICATOR_NONE;
//static const char *fonts[]               = { "Source Sans Pro:size=13:antialias=true:autohint=true", "Font Awesome 6 Free:size=11:style=Solid:antialias=true:autohint=true" };
static const char *fonts[]               = { "JetBrains Mono:size=9:style=Bold:antialias=true:autohint=true", "Font Awesome 6 Free:size=10:style=Solid:antialias=true:autohint=true" };
//static const char dmenufont[]            = "spacemono:size=11";
static const char dmenufont[]            = "JetBrains Mono:size=9:style=Bold:antialias=true:autohint=true";

static char c000000[]                    = "#000000"; // placeholder value

/*#005577 is blue*/

static char normfgcolor[]                = "#af4faf"; //
static char normbgcolor[]                = "#323232"; //#222222
static char normbordercolor[]            = "#444444";
static char normfloatcolor[]             = "#db8fd9";


static char selfgcolor[]                 = "#eeeeee";
//static char selfgcolor[]                 = "#812B81";
static char selbgcolor[]                 = "#812B81";
//static char selbgcolor[]                 = "#222222";
static char selbordercolor[]             = "#6E236E";
static char selfloatcolor[]              = "#6E236E";

/*
static char selfgcolor[]                 = "#eeeeee";
static char selbgcolor[]                 = "#ff901c";
static char selbordercolor[]             = "#ff901c";
static char selfloatcolor[]              = "#ff901c";
*/

static char titlenormfgcolor[]           = "#323232"; //#bbbbbb
//static char titlenormfgcolor[]           = "#222222";
static char titlenormbgcolor[]           = "#323232"; //#222222
static char titlenormbordercolor[]       = "#444444";
static char titlenormfloatcolor[]        = "#db8fd9";

/*
static char titleselfgcolor[]            = "#eeeeee";
static char titleselbgcolor[]            = "#005577";
static char titleselbordercolor[]        = "#005577";
static char titleselfloatcolor[]         = "#005577";
*/

/*static char titleselfgcolor[]            = "#eeeeee";
static char titleselbgcolor[]            = "#bf6e1a";
static char titleselbordercolor[]        = "#bf6e1a";
static char titleselfloatcolor[]         = "#bf6e1a";*/

//static char titleselfgcolor[]            = "#eeeeee";
static char titleselfgcolor[]            = "#323232"; //#222222
static char titleselbgcolor[]            = "#323232"; //#222222
static char titleselbordercolor[]        = "#812B81";
static char titleselfloatcolor[]         = "#812B81";

static char tagsnormfgcolor[]            = "#bbbbbb"; //#323232
static char tagsnormbgcolor[]            = "#323232"; //#222222
static char tagsnormbordercolor[]        = "#444444";
static char tagsnormfloatcolor[]         = "#db8fd9";

/*
static char tagsselfgcolor[]             = "#eeeeee";
static char tagsselbgcolor[]             = "#005577";
static char tagsselbordercolor[]         = "#005577";
static char tagsselfloatcolor[]          = "#005577";
*/

/*static char tagsselfgcolor[]             = "#eeeeee";
static char tagsselbgcolor[]             = "#bf6e1a";
static char tagsselbordercolor[]         = "#bf6e1a";
static char tagsselfloatcolor[]          = "#bf6e1a";*/

// static char tagsselfgcolor[]             = "#eeeeee";
static char tagsselfgcolor[]             = "#a62ca6";
// static char tagsselbgcolor[]             = "#812B81";
static char tagsselbgcolor[]             = "#323232"; //#222222
static char tagsselbordercolor[]         = "#812B81";
static char tagsselfloatcolor[]          = "#812B81";

static char hidnormfgcolor[]             = "#005577";
static char hidselfgcolor[]              = "#227799";
static char hidnormbgcolor[]             = "#323232"; //#222222
static char hidselbgcolor[]              = "#323232"; //#222222

static char urgfgcolor[]                 = "#bbbbbb";
static char urgbgcolor[]                 = "#323232"; //#222222
static char urgbordercolor[]             = "#ff0000";
static char urgfloatcolor[]              = "#db8fd9";



static char *colors[][ColCount] = {
	/*                       fg                bg                border                float */
	[SchemeNorm]         = { normfgcolor,      normbgcolor,      normbordercolor,      normfloatcolor },
	[SchemeSel]          = { selfgcolor,       selbgcolor,       selbordercolor,       selfloatcolor },
	[SchemeTitleNorm]    = { titlenormfgcolor, titlenormbgcolor, titlenormbordercolor, titlenormfloatcolor },
	[SchemeTitleSel]     = { titleselfgcolor,  titleselbgcolor,  titleselbordercolor,  titleselfloatcolor },
	[SchemeTagsNorm]     = { tagsnormfgcolor,  tagsnormbgcolor,  tagsnormbordercolor,  tagsnormfloatcolor },
	[SchemeTagsSel]      = { tagsselfgcolor,   tagsselbgcolor,   tagsselbordercolor,   tagsselfloatcolor },
	[SchemeHidNorm]      = { hidnormfgcolor,   hidnormbgcolor,   c000000,              c000000 },
	[SchemeHidSel]       = { hidselfgcolor,    hidselbgcolor,    c000000,              c000000 },
	[SchemeUrg]          = { urgfgcolor,       urgbgcolor,       urgbordercolor,       urgfloatcolor },
};




const char *spcmd1[] = {"alacritty", "--class", "spterm", NULL };
const char *spcmd2[] = {"alacritty", "--class", "sptodo", "-e", "nvim", "/home/bruh/vimwiki/todo.wiki", NULL };
const char *spcmd3[] = {"alacritty", "--class", "spcode", NULL };
static Sp scratchpads[] = {
   /* name          cmd  */
   {"spterm",      spcmd1},
   {"sptodo",      spcmd2},
   {"spcode",      spcmd3},
};

/* Tags
 * In a traditional dwm the number of tags in use can be changed simply by changing the number
 * of strings in the tags array. This build does things a bit different which has some added
 * benefits. If you need to change the number of tags here then change the NUMTAGS macro in dwm.c.
 *
 * Examples:
 *
 *  1) static char *tagicons[][NUMTAGS*2] = {
 *         [DEFAULT_TAGS] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F", "G", "H", "I" },
 *     }
 *
 *  2) static char *tagicons[][1] = {
 *         [DEFAULT_TAGS] = { "•" },
 *     }
 *
 * The first example would result in the tags on the first monitor to be 1 through 9, while the
 * tags for the second monitor would be named A through I. A third monitor would start again at
 * 1 through 9 while the tags on a fourth monitor would also be named A through I. Note the tags
 * count of NUMTAGS*2 in the array initialiser which defines how many tag text / icon exists in
 * the array. This can be changed to *3 to add separate icons for a third monitor.
 *
 * For the second example each tag would be represented as a bullet point. Both cases work the
 * same from a technical standpoint - the icon index is derived from the tag index and the monitor
 *
 * index. If the icon index is is greater than the number of tag icons then it will wrap around
 * until it an icon matches. Similarly if there are two tag icons then it would alternate between
 * them. This works seamlessly with alternative tags and alttagsdecoration patches.
 */
static char *tagicons[][6] = {
	/*[DEFAULT_TAGS]        = { "1", "2", "3", "4", "5", "6", "7", "8", "9" },*/
	//[DEFAULT_TAGS]        = { "", "", "", "", "", "" },
	[DEFAULT_TAGS]        = { "●", "●", "●", "●", "●", "●" },
	//[DEFAULT_TAGS]        = { "", "", "", "", "", "" },
	//[DEFAULT_TAGS]        = { "", "", "", "", "", "" },
  //[DEFAULT_TAGS] = {"•", "•", "•", "•", "•", "•"},
	/*[ALTERNATIVE_TAGS]    = { "A", "B", "C", "D", "E", "F", "G", "H", "I" },*/
	[ALTERNATIVE_TAGS]    = { "A", "B", "C", "D", "E" },
	/*[ALT_TAGS_DECORATION] = { "<1>", "<2>", "<3>", "<4>", "<5>", "<6>", "<7>", "<8>", "<9>" },*/
	[ALT_TAGS_DECORATION] = { "<1>", "<2>", "<3>", "<4>", "<5>" },
};


/* There are two options when it comes to per-client rules:
 *  - a typical struct table or
 *  - using the RULE macro
 *
 * A traditional struct table looks like this:
 *    // class      instance  title  wintype  tags mask  isfloating  monitor
 *    { "Gimp",     NULL,     NULL,  NULL,    1 << 4,    0,          -1 },
 *    { "Firefox",  NULL,     NULL,  NULL,    1 << 7,    0,          -1 },
 *
 * The RULE macro has the default values set for each field allowing you to only
 * specify the values that are relevant for your rule, e.g.
 *
 *    RULE(.class = "Gimp", .tags = 1 << 4)
 *    RULE(.class = "Firefox", .tags = 1 << 7)
 *
 * Refer to the Rule struct definition for the list of available fields depending on
 * the patches you enable.
 */
static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 *	WM_WINDOW_ROLE(STRING) = role
	 *	_NET_WM_WINDOW_TYPE(ATOM) = wintype
	 */
	RULE(.wintype  = WTYPE "DIALOG", .isfloating = 1)
	RULE(.wintype  = WTYPE "UTILITY", .isfloating = 1)
	RULE(.wintype  = WTYPE "TOOLBAR", .isfloating = 1)
	RULE(.wintype  = WTYPE "SPLASH", .isfloating = 1)
  RULE(.title    = "Preferences", .isfloating = 1)
  RULE(.instance = "todo", .isfloating = 1)
	RULE(.class    = "Gimp", .tags = 1 << 4)
	RULE(.class    = "Firefox", .tags = 1 << 7)
	RULE(.instance = "spterm", .tags = SPTAG(0), .isfloating = 1)
  RULE(.instance = "sptodo", .tags = SPTAG(1), .isfloating = 1)
  RULE(.instance = "spcode", .tags = SPTAG(2), .isfloating = 1)
};



/* Bar rules allow you to configure what is shown where on the bar, as well as
 * introducing your own bar modules.
 *
 *    monitor:
 *      -1  show on all monitors
 *       0  show on monitor 0
 *      'A' show on active monitor (i.e. focused / selected) (or just -1 for active?)
 *    bar - bar index, 0 is default, 1 is extrabar
 *    alignment - how the module is aligned compared to other modules
 *    widthfunc, drawfunc, clickfunc - providing bar module width, draw and click functions
 *    name - does nothing, intended for visual clue and for logging / debugging
 */
static const BarRule barrules[] = {
	/* monitor   bar    alignment         widthfunc                drawfunc                clickfunc                name */
	{ -1,        0,     BAR_ALIGN_LEFT,   width_tags,              draw_tags,              click_tags,              "tags" },
	{ -1,        0,     BAR_ALIGN_LEFT,   width_ltsymbol,          draw_ltsymbol,          click_ltsymbol,          "layout" },
	{ statusmon, 0,     BAR_ALIGN_RIGHT,  width_status,            draw_status,            click_status,            "status" },
	{ -1,        0,     BAR_ALIGN_NONE,   width_wintitle,          draw_wintitle,          click_wintitle,          "wintitle" },
};

/* layout(s) */
static const float mfact     = 0.55; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 0;    /* 1 means respect size hints in tiled resizals */



static const Layout layouts[] = {
	/* symbol     arrange function */
//	{ "[]=",      tile },    /* first entry is default */
	{ "",      tile },    /* first entry is default */
	{ "><>",      NULL },    /* no layout function means floating behavior */
	//{ "[M]",      monocle },
	{ "",      monocle },
	{ "(@)",      spiral },
	{ "[\\]",     dwindle },
	{ "HHH",      grid },
	{ NULL,       NULL },
};


/* key definitions */
#define MODKEY Mod4Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },



/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
static const char *dmenucmd[] = {
	"dmenu_run",
	"-m", dmenumon,
	"-fn", dmenufont,
	"-nb", normbgcolor,
	"-nf", normfgcolor,
	"-sb", selbgcolor,
	"-sf", selfgcolor,
	NULL
};
static const char *termcmd[]  = { "alacritty", NULL };

/*volume control through playerctl plus adding xf86 sym key functionality*/
#include <X11/XF86keysym.h>

static const char *upvol[] = { "pactl", "set-sink-volume", "0", "+5%", NULL };
static const char *downvol[] = { "pactl", "set-sink-volume", "0", "-5%", NULL };
static const char *mutevol[] = { "pactl", "set-sink-mute", "0", "toggle", NULL };

/*brightness vari*/
static const char *brightup[] = { "brightnessctl", "s", "+5%", NULL };
static const char *brightdown[] = { "brightnessctl", "s", "5-%", NULL };

/*main screenshot shits*/
/*static const char maimcopy[] = { "maim", "-s", "|", "xclip", "-selection", "clipboard", "-t", "image/png", NULL };*/
static const char *maimcopy[] = { "screencopy", NULL };
static const char *maimsave[] = { "screensave", NULL };

/*toggle picom*/
static const char *killcomp[] = { "compositorp", NULL };

static const char *compo[] = {"pkill", "picom", NULL};
static const char *compi[] = {"picom", "--experimental-backends", NULL};

static Key keys[] = {
	/* modifier                     key            function                argument */
    /*volume control*/

    { 0,           XF86XK_AudioRaiseVolume,        spawn,                  {.v = upvol   } },
    { 0,           XF86XK_AudioLowerVolume,        spawn,                  {.v = downvol } },
    { 0,           XF86XK_AudioMute,               spawn,                  {.v = mutevol } },

    /*brightness*/

    { 0,           XF86XK_MonBrightnessUp,         spawn,                  {.v = brightup } },
    { 0,           XF86XK_MonBrightnessDown,       spawn,                  {.v = brightdown } },

    /*screenshot*/

    { 0,                            XK_Print,      spawn,                  {.v = maimcopy } },
    { MODKEY,                       XK_Print,      spawn,                  {.v = maimsave } },

    /*kill compositor*/

    { MODKEY|ShiftMask,             XK_v,          spawn,                  {.v = killcomp } },

	{ MODKEY,                       XK_o,          spawn,                  {.v = dmenucmd } },
	{ MODKEY|ShiftMask,             XK_Return,     spawn,                  {.v = termcmd } },
	{ MODKEY,                       XK_b,          togglebar,              {0} },
	{ MODKEY,                       XK_j,          focusstack,             {.i = +1 } },
	{ MODKEY,                       XK_k,          focusstack,             {.i = -1 } },
	{ MODKEY,                       XK_i,          incnmaster,             {.i = +1 } },
	{ MODKEY,                       XK_d,          incnmaster,             {.i = -1 } },
    { MODKEY|ShiftMask,             XK_j,          movestack,              {.i = +1 } },
    { MODKEY|ShiftMask,             XK_k,          movestack,              {.i = -1 } },
	{ MODKEY,                       XK_h,          setmfact,               {.f = -0.05} },
	{ MODKEY,                       XK_l,          setmfact,               {.f = +0.05} },
	{ MODKEY|ShiftMask,             XK_h,          setcfact,               {.f = +0.25} },
	{ MODKEY|ShiftMask,             XK_l,          setcfact,               {.f = -0.25} },
	{ MODKEY|ShiftMask,             XK_o,          setcfact,               {0} },
	{ MODKEY,                       XK_Return,     zoom,                   {0} },
	{ MODKEY|Mod1Mask,              XK_u,          incrgaps,               {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_u,          incrgaps,               {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_i,          incrigaps,              {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_i,          incrigaps,              {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_o,          incrogaps,              {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_o,          incrogaps,              {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_6,          incrihgaps,             {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_6,          incrihgaps,             {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_7,          incrivgaps,             {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_7,          incrivgaps,             {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_8,          incrohgaps,             {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_8,          incrohgaps,             {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_9,          incrovgaps,             {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_9,          incrovgaps,             {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_0,          togglegaps,             {0} },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_0,          defaultgaps,            {0} },
	//{ MODKEY,                       XK_Tab,        view,                   {0} },
	{ MODKEY|ShiftMask,             XK_c,          killclient,             {0} },
	{ MODKEY|ShiftMask,             XK_q,          quit,                   {0} },
	{ MODKEY|ControlMask|ShiftMask, XK_q,          quit,                   {1} },
	{ MODKEY,                       XK_t,          setlayout,              {.v = &layouts[0]} },
  { MODKEY,                       XK_t,          spawn,                  {.v = compi}},
	{ MODKEY,                       XK_f,          setlayout,              {.v = &layouts[1]} },
	{ MODKEY,                       XK_m,          setlayout,              {.v = &layouts[2]} },
  { MODKEY,                       XK_m,          spawn,                  {.v = compo}},
	{ MODKEY,                       XK_space,      setlayout,              {0} },

    // scratchpad 1
	{ MODKEY|ShiftMask,             XK_space,      togglefloating,         {0} },
	{ MODKEY,                       XK_grave,      togglescratch,          {.ui = 0 } },
	{ MODKEY|ControlMask,           XK_grave,      setscratch,             {.ui = 0 } },
	{ MODKEY|ShiftMask,             XK_grave,      removescratch,          {.ui = 0 } },

    // scratchpad 2
	{ MODKEY,                       XK_Tab,        togglescratch,          {.ui = 1 } },

    // scratchpad 3
    { MODKEY|Mod1Mask,                       XK_Tab,         togglescratch,         {.ui = 2 } },

	{ MODKEY|ShiftMask,             XK_f,          fullscreen,             {0} },
	{ MODKEY,                       XK_0,          view,                   {.ui = ~SPTAGMASK } },
	{ MODKEY|ShiftMask,             XK_0,          tag,                    {.ui = ~SPTAGMASK } },
	{ MODKEY,                       XK_comma,      focusmon,               {.i = -1 } },
	{ MODKEY,                       XK_period,     focusmon,               {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_comma,      tagmon,                 {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period,     tagmon,                 {.i = +1 } },
	{ MODKEY|ControlMask,           XK_comma,      cyclelayout,            {.i = -1 } },
	{ MODKEY|ControlMask,           XK_period,     cyclelayout,            {.i = +1 } },

	TAGKEYS(                        XK_1,                                  0)
	TAGKEYS(                        XK_2,                                  1)
	TAGKEYS(                        XK_3,                                  2)
	TAGKEYS(                        XK_4,                                  3)
	TAGKEYS(                        XK_5,                                  4)
	TAGKEYS(                        XK_6,                                  5)
	//TAGKEYS(                        XK_7,                                  6)
	//TAGKEYS(                        XK_8,                                  7)
	//TAGKEYS(                        XK_9,                                  8)
};


/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
	/* click                event mask           button          function        argument */
	{ ClkLtSymbol,          0,                   Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,                   Button3,        setlayout,      {.v = &layouts[2]} },
	{ ClkWinTitle,          0,                   Button2,        zoom,           {0} },
	{ ClkStatusText,        0,                   Button2,        spawn,          {.v = termcmd } },
	{ ClkClientWin,         MODKEY,              Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,              Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,              Button3,        resizemouse,    {0} },
	{ ClkTagBar,            0,                   Button1,        view,           {0} },
	{ ClkTagBar,            0,                   Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,              Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,              Button3,        toggletag,      {0} },
};



