/**
 * errno.h
 *
 * Common error numbers and a global error variable to identify the execution exit error.
 *
 *
 * */

#ifndef _ERRNO_H_
#define _ERRNO_H_
#endif

#define EFILENAME_MISSING 101;
#define EFILE_NOT_FOUND 102;
#define EINVALID_FILE_FORMAT 103;
#define EUNEXPECTED_FILE_FORMAT 104;


static int ERRNO;