/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MPLayerGroupInternal : NSObject
{
    double numberOfLoops;
    unsigned int loopingMode;
    double durationPadding;
    double duration;
    double timeIn;
    double phaseInDuration;
    double phaseOutDuration;
    NSString *backgroundAudioID;
    struct CGColor *backgroundColor;
    NSDictionary *authoredVersionInfo;
    int sendLiveNotification;
    NSRecursiveLock *liveLock;
    BOOL autoAdjustDuration;
    BOOL isDocumentLayerGroup;
    BOOL isTriggered;
    BOOL startsPaused;
    BOOL usedAllPaths;
    float opacity;
    struct CGPoint position;
    float zPosition;
    struct CGSize size;
    float rotationAngle;
    float xRotationAngle;
    float yRotationAngle;
    float scale;
    int zIndex;
    NSString *uuid;
    NSMutableDictionary *layerKeyDictionary;
    NSDictionary *initialState;
}

@property(nonatomic) BOOL usedAllPaths; // @synthesize usedAllPaths;
@property(retain, nonatomic) NSDictionary *initialState; // @synthesize initialState;
@property(retain, nonatomic) NSMutableDictionary *layerKeyDictionary; // @synthesize layerKeyDictionary;
@property(nonatomic) int zIndex; // @synthesize zIndex;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid;
@property(nonatomic) float scale; // @synthesize scale;
@property(nonatomic) float yRotationAngle; // @synthesize yRotationAngle;
@property(nonatomic) float xRotationAngle; // @synthesize xRotationAngle;
@property(nonatomic) float rotationAngle; // @synthesize rotationAngle;
@property(nonatomic) struct CGSize size; // @synthesize size;
@property(nonatomic) float zPosition; // @synthesize zPosition;
@property(nonatomic) struct CGPoint position; // @synthesize position;
@property(nonatomic) float opacity; // @synthesize opacity;
@property(nonatomic) BOOL isDocumentLayerGroup; // @synthesize isDocumentLayerGroup;
@property(nonatomic) BOOL autoAdjustDuration; // @synthesize autoAdjustDuration;
@property(retain, nonatomic) NSRecursiveLock *liveLock; // @synthesize liveLock;
@property(nonatomic) int sendLiveNotification; // @synthesize sendLiveNotification;
@property(retain, nonatomic) NSDictionary *authoredVersionInfo; // @synthesize authoredVersionInfo;
@property(nonatomic) struct CGColor *backgroundColor; // @synthesize backgroundColor;
@property(nonatomic) unsigned int loopingMode; // @synthesize loopingMode;
@property(retain, nonatomic) NSString *backgroundAudioID; // @synthesize backgroundAudioID;
@property(nonatomic) double phaseOutDuration; // @synthesize phaseOutDuration;
@property(nonatomic) double phaseInDuration; // @synthesize phaseInDuration;
@property(nonatomic) BOOL startsPaused; // @synthesize startsPaused;
@property(nonatomic) BOOL isTriggered; // @synthesize isTriggered;
@property(nonatomic) double timeIn; // @synthesize timeIn;
@property(nonatomic) double duration; // @synthesize duration;
@property(nonatomic) double durationPadding; // @synthesize durationPadding;
@property(nonatomic) double numberOfLoops; // @synthesize numberOfLoops;
- (void)dealloc;
- (void)finalize;

@end
