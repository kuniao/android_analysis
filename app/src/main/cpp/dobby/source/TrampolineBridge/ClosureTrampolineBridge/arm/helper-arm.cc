#include "common/macros/platform_macro.h"
#if defined(TARGET_ARCH_ARM)

#include "dobby_internal.h"

void set_routing_bridge_next_hop(RegisterContext *ctx, void *address) {
  *reinterpret_cast<void **>(&ctx->general.regs.r12) = address;
}

void get_routing_bridge_next_hop(RegisterContext *ctx, void *address) {
}

#endif