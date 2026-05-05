#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER ""

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 128

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).

#define BLOCKS(X)             \
    X("", "/home/$USER/.local/bin/music-title", 1,    11)  \
    X("", "/home/$USER/.local/bin/volume",      0,    12) \
    X("", "/home/$USER/.local/bin/brightness",  0,    13) \
    X("", "/home/$USER/.local/bin/memory",      3,    3)  \
    X("", "/home/$USER/.local/bin/cpu",         3,    14) \
    X("", "/home/$USER/.local/bin/battery",     30,   1)  \
    X("", "/home/$USER/.local/bin/wifi",        3,    15) \
    X("", "/home/$USER/.local/bin/month-day",   3600, 2)  \
    X("", "/home/$USER/.local/bin/clock",       60,   16)
#endif  // CONFIG_H
