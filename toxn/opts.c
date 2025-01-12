#include "toxn.h"

const char *toxn_dir;
uint32_t toxn_logmask =  TOXN_L_TOXN | TOXN_L_ERROR;
int net_max_uploads = -2;
unsigned net_max_peers;
unsigned net_bw_limit_in;
unsigned net_bw_limit_out;
int net_port = 6880;
off_t cm_alloc_size = 2048 * 1024;
int ipcprot = 0600;
int empty_start = 0;
const char *tr_ip_arg;
int net_ipv4 = 1;
int net_ipv6 = 0;
unsigned net_numwant = 50;
