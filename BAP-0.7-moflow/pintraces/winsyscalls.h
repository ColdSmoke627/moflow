#ifndef _WINSYSCALLS_H
#define _WINSYSCALLS_H

#include <memory>
#include <string>
#include <stdint.h>

enum os_t {
    OS_NT_SP3,
    OS_NT_SP4,
    OS_NT_SP5,
    OS_NT_SP6,
    OS_2K_SP0,
    OS_2K_SP1,
    OS_2K_SP2,
    OS_2K_SP3,
    OS_2K_SP4,
    OS_XP_SP0,
    OS_XP_SP1,
    OS_XP_SP2,
    OS_XP_SP3,
    OS_2003_SP0,
    OS_2003_SP1,
    OS_VISTA_SP0,
    OS_SEVEN_SP0,
};

struct SCENTRY {
    const char* name;
    unsigned int   x[17];
};

extern struct SCENTRY syscalls[];

extern int num_syscalls;

// generated by pnf, added xp-sp3 and seven-sp0 to the tables from the ms project

/* Functions */
std::auto_ptr<std::string> get_name(uint32_t, os_t = OS_SEVEN_SP0);

uint32_t get_syscall(const char *, os_t);

#ifdef _WIN32
os_t get_win_version();
#endif

#endif
