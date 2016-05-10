/**
 * xhyve-manager
 * a simple CLI utility to manage xhyve virtual machines.
 *
 * Usage: ./xhyve-manager \
 *   + {list} all available machines
 *   + {create,delete,start} <machine-name>
 *
 **/

#ifndef __XHYVEMANAGER_H__
#define __XHYVEMANAGER_H__

typedef struct xhyve_virtual_machine {
  char *type;
  char *memory;
  char *cpus;
} xhyve_virtual_machine_t;

void print_machine(xhyve_virtual_machine_t *machine);
char *get_config_path(const char *name, const char *path);
void load_config(xhyve_virtual_machine_t *machine, const char *config_path);
void parse_args(const char *command, const char *param, xhyve_virtual_machine_t *machine);
void print_usage(void);

#endif
