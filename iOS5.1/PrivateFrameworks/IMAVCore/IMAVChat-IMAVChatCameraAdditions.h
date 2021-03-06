/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMAVCore/IMAVChat.h>

@interface IMAVChat (IMAVChatCameraAdditions)
- (void)setLocalAspectRatio:(struct CGSize)arg1 cameraOrientation:(unsigned int)arg2 cameraType:(unsigned int)arg3;
- (struct CGSize)localAspectRatioForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
@property(nonatomic) BOOL lockCamera;
@property(nonatomic) unsigned int cameraOrientation;
@property(nonatomic) unsigned int cameraType;
- (void)_postParticipantMediaChangeNotification:(id)arg1 cameraChanged:(BOOL)arg2 orientationChanged:(BOOL)arg3 aspectChanged:(BOOL)arg4 cameraWillSwitch:(BOOL)arg5 camera:(unsigned int)arg6 orientation:(unsigned int)arg7 aspect:(struct CGSize)arg8;
- (BOOL)stopPreview;
- (BOOL)startPreviewWithError:(id *)arg1;
- (BOOL)closeCamera;
- (BOOL)openCamera;
@end

