//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"⌨", "sb-kbselect", 0, 30}, */
	/* {"", "cat /tmp/recordingicon 2>/dev/null",	0,	9}, */
	/* {"",	"sb-tasks",	10,	26}, */
	{"",	"sb-pacpackages",	12*60*60,	8},
	/* {"",	"sb-news",		0,	6}, */
	/* {"",	"sb-price link \"Chainlink\" 🔗",			300,	25}, */
	{"",	"sb-price xmr Monero 🔒",			300,	22},
	{"",	"sb-price btc Bitcoin 💰",				300,	21},
	/* {"",	"sb-memory",	10,	14}, */
	/* {"",	"sb-cpu",		10,	18}, */
	/* {"",	"sb-moonphase",	18000,	17}, */
	/* {"",	"sb-forecast",	18000,	5}, */
	{"",	"sb-mailbox",	600,	12},
	/* {"",	"sb-nettraf",	1,	16}, */
	{"",	"sb-volume",	60,	10},
	{"",	"sb-microphone",	60,	11},
	{"",	"sb-battery",	5,	3},
	{"",	"sb-brightness",	5,	2},
	{"",	"sb-clock",	10,	1},
	{"",	"sb-internet",	5,	4},
	/* {"",	"sb-help-icon",	0,	15}, */
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
