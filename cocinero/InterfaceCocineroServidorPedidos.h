/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _INTERFACECOCINEROSERVIDORPEDIDOS_H_RPCGEN
#define _INTERFACECOCINEROSERVIDORPEDIDOS_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define autorizar_cocineros 0x20000003
#define autorizar_cocineros_version 1

#if defined(__STDC__) || defined(__cplusplus)
#define seleccionarIdCocinero 1
extern  int * seleccionaridcocinero_1(int *, CLIENT *);
extern  int * seleccionaridcocinero_1_svc(int *, struct svc_req *);
#define terminarPedido 2
extern  int * terminarpedido_1(int *, CLIENT *);
extern  int * terminarpedido_1_svc(int *, struct svc_req *);
extern int autorizar_cocineros_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define seleccionarIdCocinero 1
extern  int * seleccionaridcocinero_1();
extern  int * seleccionaridcocinero_1_svc();
#define terminarPedido 2
extern  int * terminarpedido_1();
extern  int * terminarpedido_1_svc();
extern int autorizar_cocineros_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_INTERFACECOCINEROSERVIDORPEDIDOS_H_RPCGEN */
