//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AVAudioOutputSettings, AVVideoOutputSettings;

@protocol AVOutputSettingsValidation
- (BOOL)validateVideoOutputSettings:(AVVideoOutputSettings *)arg1 reason:(id *)arg2;
- (BOOL)validateAudioOutputSettings:(AVAudioOutputSettings *)arg1 reason:(id *)arg2;
@end

