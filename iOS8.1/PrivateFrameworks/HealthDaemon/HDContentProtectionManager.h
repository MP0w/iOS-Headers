//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDDiagnosticObject.h"

@class NSMapTable, NSObject<OS_dispatch_queue>, NSString;

@interface HDContentProtectionManager : NSObject <HDDiagnosticObject>
{
    int _contentProtectionState;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_observationQueue;
    NSMapTable *_observers;
    double _beganObservingTime;
    double _lastNotificationTime;
}

+ (BOOL)isProtectedDataAvailableWithState:(int)arg1;
- (void).cxx_destruct;
- (void)_notifyObserversWithContentProtectionState:(int)arg1;
- (id)_contentProtectionStateString:(int)arg1;
- (id)diagnosticDescription;
- (void)setContentProtectionState:(int)arg1;
- (BOOL)deviceUnlockedSinceBoot;
- (BOOL)isProtectedDataAvailable;
- (int)observedState;
- (void)removeContentProtectionObserver:(id)arg1;
- (void)addContentProtectionObserver:(id)arg1 withQueue:(id)arg2;
- (void)dealloc;
- (id)initWithNotifications:(BOOL)arg1 initialState:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

