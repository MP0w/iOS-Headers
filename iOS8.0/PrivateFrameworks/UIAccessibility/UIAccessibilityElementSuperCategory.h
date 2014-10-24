//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIAccessibility/__UIAccessibilityElementSuperCategory_super.h>

@interface UIAccessibilityElementSuperCategory : __UIAccessibilityElementSuperCategory_super
{
}

+ (Class)safeCategoryTargetClass;
+ (id)safeCategoryTargetClassName;
- (BOOL)_accessibilitySupportsHandwriting;
- (id)_accessibilityAutomaticIdentifier;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint)arg1;
- (void)accessibilityZoomInAtPoint:(struct CGPoint)arg1;
- (id)description;
- (BOOL)_accessibilityProvidesOwnFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityPath;
- (id)accessibilityLanguage;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (struct CGPoint)accessibilityActivationPoint;
- (float)_accessibilityActivationDelay;
- (BOOL)_accessibilitySupportsActivateAction;
- (BOOL)accessibilityActivate;
- (void)accessibilityElementDidLoseFocus;
- (void)accessibilityElementDidBecomeFocused;
- (void)_accessibilitySetValue:(id)arg1;
- (void)setAccessibilityContainer:(id)arg1;
- (void)dealloc;
- (id)initWithAccessibilityContainer:(id)arg1;
- (id)init;

@end
