#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "MDDNSConfigProtocol.h"
#import "MDDNSEntrance.h"
#import "MDDNSAccessPoint.h"

FOUNDATION_EXPORT double MMDNSFrameworkVersionNumber;
FOUNDATION_EXPORT const unsigned char MMDNSFrameworkVersionString[];

