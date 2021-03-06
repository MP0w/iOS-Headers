/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIWebDocumentView.h>

#import "UIActionSheetDelegate-Protocol.h"

@interface UIWebDocumentView (Interaction) <UIActionSheetDelegate>
+ (id)_sharedHighlightView;
+ (id)_createDefaultHighlightView;
@property(getter=_acceptsFirstResponder, setter=_setAcceptsFirstResponder:) BOOL _acceptsFirstResponder;
- (id)_doubleTapGestureRecognizer;
- (id)superviewForSheet;
- (void)setAllowsLinkSheet:(BOOL)arg1;
- (void)setAllowsDataDetectorsSheet:(BOOL)arg1;
- (void)setAllowsImageSheet:(BOOL)arg1;
- (id)interactionDelegate;
- (void)setInteractionDelegate:(id)arg1;
- (BOOL)supportsTwoFingerScrollingAtTouchLocation:(struct CGPoint)arg1 andLocation:(struct CGPoint)arg2;
- (void)sendScrollWheelEvents;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)_targetURL;
- (void)cancelInteractionWithImmediateDisplay:(BOOL)arg1;
- (void)deferInteraction;
- (void)cancelInteraction;
- (void)completeInteraction;
- (void)resetInteraction;
- (void)highlightApproximateNodeAndDisplayInfoSheet;
- (void)hideTapHighlight;
- (void)highlightApproximateNodeInverted:(BOOL)arg1;
- (id)approximateNodeAtViewportLocation:(struct CGPoint *)arg1;
- (void)webViewDidPreventDefaultForEvent:(id)arg1;
- (void)webView:(id)arg1 didObserveDeferredContentChange:(int)arg2 forFrame:(id)arg3;
- (void)attemptClick:(id)arg1;
- (void)_sendMouseMoveAndAttemptClick:(id)arg1;
- (void)performClick:(id)arg1;
- (void)_twoFingerPanRecognized:(id)arg1;
- (void)_longPressRecognized:(id)arg1;
- (void)_highlightLongPressRecognized:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)_twoFingerDoubleTapRecognized:(id)arg1;
- (void)_doubleTapRecognized:(id)arg1;
- (void)_singleTapRecognized:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 canBePreventedByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)installGestureRecognizers;
- (BOOL)willInteractWithLocation:(struct CGPoint)arg1;
- (BOOL)isInInteraction;
- (BOOL)startActionSheet;
- (void)validateInteractionWithLocation:(struct CGPoint)arg1;
- (void)tapInteractionWithLocation:(struct CGPoint)arg1;
- (void)continueInteractionWithLocation:(struct CGPoint)arg1;
- (void)startInteractionWithLocation:(struct CGPoint)arg1;
- (void)_resetInteractionWithLocation:(struct CGPoint)arg1;
- (void)performInteractionSelector:(SEL)arg1 afterDelay:(double)arg2;
- (void)clearInteractionTimer;
@end

