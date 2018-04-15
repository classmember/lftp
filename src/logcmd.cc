#include <stdio.h>
#include <time.h>
#include "logcmd.h"

void logcmd(FILE * fp, const char * command)
{
    // log date time stamp
    time_t rawtime;
    time(&rawtime);
    struct tm *info;
    info = gmtime(&rawtime);
    // fprintf(fp, "[yyyy-mm-dd hh:mm:ss] ");
    fprintf(fp, "[%.4d-%.2d-%.2d %.2d:%.2d:%.2d] ",
            info->tm_year + 1900,
            info->tm_mon + 1,
            info->tm_mday,
            info->tm_hour % 24,
            info->tm_min,
            info->tm_sec
            );
    // log command
    fprintf(fp, command);
    fprintf(fp, "\n");
    fclose(fp);
}
