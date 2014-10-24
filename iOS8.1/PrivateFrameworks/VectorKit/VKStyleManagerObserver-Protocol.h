//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VKStyleManager;

@protocol VKStyleManagerObserver <NSObject>
+ (BOOL)reloadOnStylesheetChange;
@property(readonly, nonatomic) VKStyleManager *styleManager;

@optional
- (void)stylesheetDoneChanging;
- (void)stylesheetDidChange;
- (void)stylesheetTransitionDidProgress;
- (void)stylesheetWillChange;
- (void)stylesheetWillTransition:(unsigned int)arg1;
- (void)prepareForStylesheetTransitionToMapDisplayStyle:(unsigned int)arg1 withReadinessBlock:(void (^)(id <VKStyleManagerObserver>))arg2;
@end
