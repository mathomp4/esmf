/* $Id: ESMC_Log.h,v 1.2 2001/11/15 22:56:37 dneckels Exp $ */

#ifndef ESMC_LOGGER_H
#define ESMC_LOGGER_H

#include <stdio.h>

#include "ESMC_BasicUtil.h"

#define ESMC_LOG_LEVELS 3
typedef enum {
  ESMC_LOGLEVEL_INFO = 0,
  ESMC_LOGLEVEL_ERROR,
  ESMC_LOGLEVEL_TIMER
} ESMC_LogLevel;

#define ESMC_LOG_STATES 4
typedef enum {
  ESMC_LOGSTATE_QUIET = 0,
  ESMC_LOGSTATE_NORMAL, /* Reports timing and info */ 
  ESMC_LOGSTATE_TIMER,
  ESMC_LOGSTATE_VERBOSE
} ESMC_LogState;


typedef struct mc_log_tag {
  FILE **log_fp;
  int num_fp;
  int labelio;
  ESMC_LogState logstate;
} ESMC_LogClass, *ESMC_Log;


#ifdef __cplusplus
extern "C" {
#endif

int ESMC_LogPrint(ESMC_Log logger, ESMC_LogLevel priority, char *format, ...);
int ESMC_LogNew(ESMC_Log *log, char *logname, ESMC_LogState logstate, int labelio);
int ESMC_LogConstruct(ESMC_Log log, char *logname, ESMC_LogState logstate, int labelio);
int ESMC_LogDelete(ESMC_Log log);
int ESMC_LogDestruct(ESMC_Log log)     ;
int ESMC_LogSetState(ESMC_Log log, ESMC_LogState logstate);
int ESMC_LogFlush(ESMC_Log log);

#ifdef __cplusplus
}
#endif

#endif
