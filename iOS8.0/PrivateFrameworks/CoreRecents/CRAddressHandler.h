//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRAddressHandlerIdentity;

@interface CRAddressHandler : NSObject
{
    id <CRAddressHandler> _handler;
    CRAddressHandlerIdentity *_identity;
}

+ (id)addressHandlerWithPrincipalClass:(Class)arg1;
@property(retain, nonatomic) CRAddressHandlerIdentity *identity; // @synthesize identity=_identity;
- (id)externalAddressFromAddress:(id)arg1 kind:(id)arg2;
- (id)addressFromExternalAddress:(id)arg1 kind:(id)arg2;
- (id)syncKeyForAddress:(id)arg1 kind:(id)arg2;
- (id)supportedAddressKinds;
- (id)description;
- (void)dealloc;
- (id)initWithAddressHandler:(id)arg1;
- (id)initWithPrincipalClass:(Class)arg1;

@end

