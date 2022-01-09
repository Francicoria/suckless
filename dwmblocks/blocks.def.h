//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	                   /*Update Interval*/     /*Update Signal*/
	{"", "acpi | awk -F',' '{print $2}'",	   45,	                   0},

	{"", "date -u '+%H:%M %d/%b/%y'",            30,                     0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ǁ ";
static unsigned int delimLen = 5;
