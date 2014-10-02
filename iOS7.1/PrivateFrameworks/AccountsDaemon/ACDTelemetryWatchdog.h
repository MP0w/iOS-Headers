//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface ACDTelemetryWatchdog : NSObject
{
    NSLock *_lock;
    BOOL _fired;
    NSMutableArray *_telemetry;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_source> *_timerSource;
}

- (void).cxx_destruct;
- (void)_dumpTelemetryData;
- (void)recordCurrentState;
- (void)logWithLevel:(int)arg1 format:(id)arg2;
- (void)dealloc;
- (id)initWithTimeout:(double)arg1;

@end
