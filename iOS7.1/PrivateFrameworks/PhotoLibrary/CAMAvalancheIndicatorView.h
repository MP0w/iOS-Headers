//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface CAMAvalancheIndicatorView : UIView
{
    BOOL _showsWhenStarted;
    UIView *__backgroundView;
    UILabel *__countLabel;
    int __numberOfPhotos;
}

@property(readonly, nonatomic) int _numberOfPhotos; // @synthesize _numberOfPhotos=__numberOfPhotos;
@property(readonly, nonatomic) UILabel *_countLabel; // @synthesize _countLabel=__countLabel;
@property(readonly, nonatomic) UIView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
@property(nonatomic) BOOL showsWhenStarted; // @synthesize showsWhenStarted=_showsWhenStarted;
- (void)_updateCountLabelWithNumberOfPhotos;
- (void)_performCaptureAnimation;
- (void)reset;
- (void)incrementWithCaptureAnimation:(BOOL)arg1;
- (void)finishIncrementingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCAMAvalancheIndicatorViewInitialization;

@end

