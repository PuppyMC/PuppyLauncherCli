/*
 * Version information for PuppyLauncherCli.
 */

#include <stdio.h>

#include "internal/version/version.h"

#define VERSION_STRING "0.0.1"

#ifndef GIT_VERSION
#define GIT_VERSION "unknown"
#endif

void Version_Print(void)
{
    fprintf(stdout, "PuppyLauncherCli v%s build %s\n",
            VERSION_STRING, GIT_VERSION);
}
