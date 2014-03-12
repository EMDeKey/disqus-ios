//
//  MDDisqusConstants.h
//  Disqus
//
//  Created by Andrew Kopanev on 3/12/14.
//  Copyright (c) 2014 Moqod. All rights reserved.
//

#ifndef Disqus_MDDisqusConstants_h
#define Disqus_MDDisqusConstants_h

// errors returned by Disqus has this error domain
extern NSString *const MDDisqusErrorDomain;

// some of disqus errors
// full list can be found there: http://disqus.com/api/docs/errors/
typedef NS_ENUM(NSInteger, MDDisqusErrorCode) {
	MDDisqusErrorAuthorizationSignatureNotValid			= 18,
};

// errors generated by MDDisqusComponent has this domain
extern NSString *const MDDisqusComponentErrorDomain;

typedef NS_ENUM(NSUInteger, MDDisqusComponentError) {
	MDDisqusComponentErrorNotAuthorized					= 1,
	MDDisqusComponentErrorWebViewAuthorizationFailed,
	MDDisqusComponentErrorCancelled,
	MDDisqusComponentErrorUnknown
};

#endif
