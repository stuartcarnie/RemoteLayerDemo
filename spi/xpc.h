#include <xpc/xpc.h>

void xpc_dictionary_set_mach_send(xpc_object_t, const char*, mach_port_t);
mach_port_t xpc_dictionary_copy_mach_send(xpc_object_t, const char*);
