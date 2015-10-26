/*
 * pptpctrl.h
 *
 * PPTP control function prototypes.
 */

#ifndef _PPTPD_PPTPCTRL_H
#define _PPTPD_PPTPCTRL_H

extern int pptpctrl_debug;
extern int window;
extern struct in_addr inetaddrs[2];
extern int pptp_sock;

#ifdef VRF
extern char *vrf;
#else
#define vrf_socket(vrf, dom, typ, prot) socket(dom, typ, prot)
#endif

#endif  /* !_PPTPD_PPTPCTRL_H */
