//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureSession_FigRecorder, NSMutableArray;

@interface AVCaptureOutputInternal_FigRecorder : NSObject
{
    AVCaptureSession_FigRecorder *session;
    NSMutableArray *connections;
    int changeSeed;
    struct CGAffineTransform metadataTransform;
    float rollAdjustment;
    BOOL physicallyMirrorsVideo;
}

- (void)dealloc;
- (id)init;
- (BOOL)isKindOfClass:(Class)arg1;

@end
