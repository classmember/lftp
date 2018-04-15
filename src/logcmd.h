#ifndef LOGCMD_H
#define LOGCMD_H

#define LOGNAME ".lftplog"

void logcmd(FILE * fp, const char * command);

#include "logcmd.cc"
#endif // LOGCMD_H
