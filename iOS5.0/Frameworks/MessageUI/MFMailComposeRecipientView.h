/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MessageUI/MFComposeHeaderView.h>

#import "ABPeoplePickerNavigationControllerDelegate-Protocol.h"
#import "MFComposeRecipientAtomDelegate-Protocol.h"
#import "MFDragDestination-Protocol.h"
#import "MFDragSource-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class MFComposeRecipient, MFComposeRecipientAtom, NSArray, NSCountedSet, NSMutableArray, NSMutableDictionary, NSString, NSTimer, UIButton, UIImage, UITextField, UIView;

@interface MFMailComposeRecipientView : MFComposeHeaderView <UITextFieldDelegate, ABPeoplePickerNavigationControllerDelegate, MFComposeRecipientAtomDelegate, MFDragSource, MFDragDestination>
{
    UITextField *_textField;
    NSMutableArray *_recipients;
    NSMutableDictionary *_atoms;
    NSCountedSet *_uncommentedAddresses;
    struct __CFDictionary *_atomStylesByRecipient;
    int _defaultStyle;
    MFComposeRecipientAtom *_selectedAtom;
    MFComposeRecipient *_placeholderRecipient;
    int _dragSourceOriginalIndex;
    UIButton *_addButton;
    BOOL _editable;
    BOOL _picking;
    BOOL _focused;
    NSArray *_properties;
    UIImage *_buttonImage;
    UIImage *_pressedImage;
    int _maxRecipients;
    BOOL _parentIsClosing;
    BOOL _deselectOnNextKeyboardInput;
    BOOL _clearSelectionUIAfterFirstResponder;
    NSTimer *_delayTimer;
    double _inputDelay;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)setLabel:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
@property(nonatomic) BOOL editable; // @synthesize editable=_editable;
@property(readonly, nonatomic) NSString *text;
@property(readonly, nonatomic) float offsetForRowWithTextField;
@property(readonly, nonatomic) int numberOfRowsOfTextInField;
- (void)clearText;
- (BOOL)hasContent;
- (void)setProperty:(int)arg1;
- (void)setProperties:(id)arg1;
@property(copy, nonatomic) NSArray *addresses;
- (void)removeRecipient:(id)arg1;
- (void)addRecipient:(id)arg1;
- (void)addRecipient:(id)arg1 index:(unsigned int)arg2 animate:(BOOL)arg3;
- (void)addAddress:(id)arg1;
- (void)_addRecord:(void *)arg1 identifier:(int)arg2;
- (void)_addRecord:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
@property(retain, nonatomic) MFComposeRecipient *placeholderRecipient;
- (void)setAddressAtomStyle:(int)arg1 forRecipient:(id)arg2;
- (void)_removeAddressAtomStyleForRecipient:(id)arg1;
- (int)_addressAtomStyleForRecipient:(id)arg1;
- (void)clearAllRecipientAddressAtomStyles;
- (BOOL)containsAddress:(id)arg1;
- (void)_addUncommentedAddress:(id)arg1;
- (void)_removeUncommentedAddress:(id)arg1;
- (void)_removeAllRecipients;
- (id)dragInitiatedAtPoint:(struct CGPoint)arg1;
- (struct CGRect)frameForDraggedItem:(id)arg1;
- (id)viewForDraggedItem:(id)arg1 atScale:(float)arg2;
- (void)dragStartedWithItem:(id)arg1;
- (void)animatePlaceholderForDragFailure:(id)arg1;
- (void)dragCompletedForItem:(id)arg1 success:(BOOL)arg2;
- (id)viewForDragSource;
- (int)_recipientIndexAtPoint:(struct CGPoint)arg1;
- (void)dragEntered:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)dragUpdated:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)dragExited:(id)arg1;
- (struct CGRect)dropRect;
- (void)dropItem:(id)arg1;
- (id)viewForDrop;
- (id)supportedDropTypes:(id)arg1;
- (BOOL)_addable;
- (void)keyboardInputChangedSelection:(id)arg1;
- (void)selectComposeRecipientAtom:(id)arg1;
- (void)deselectComposeRecipientAtom:(id)arg1;
- (void)reflow;
- (void)_reflowAnimated:(BOOL)arg1;
- (void)addButtonClicked:(id)arg1;
- (void)_dismissPicker:(id)arg1;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)mf_textFieldShowingSearchResults:(id)arg1;
- (void)mf_selectNextSearchResultForTextField:(id)arg1;
- (void)mf_selectPreviousSearchResultForTextField:(id)arg1;
- (BOOL)mf_presentSearchResultsForTextField:(id)arg1;
- (BOOL)mf_chooseSelectedSearchResultForTextField:(id)arg1;
- (void)textFieldDidBecomeFirstResponder:(id)arg1;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (void)composeRecipientAtomShowPersonCard:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)_cancelDelayTimer;
- (void)_delayTimerFired:(id)arg1;
- (void)composeRecipientAtomSelectPrevious:(id)arg1;
- (void)composeRecipientAtomSelectNext:(id)arg1;
- (void)textChanged:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)_deselectAtom;
- (void)_deleteSelectedAtom;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (float)textFieldOffsetForNumberOfRowsToScroll:(unsigned int)arg1 numberOfRowsAboveField:(int)arg2;
- (void)showAtoms;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)parentWillClose;
- (void)parentDidClose;
- (BOOL)finishEnteringRecipient;
- (float)_topRowTextWidth;
- (float)_textFieldOffsetForRow:(int)arg1;
- (struct CGRect)_inactiveTextFieldFrame;
@property(nonatomic) int defaultAddressAtomStyle; // @synthesize defaultAddressAtomStyle=_defaultStyle;
@property(nonatomic) BOOL focused; // @synthesize focused=_focused;
@property(readonly, nonatomic) UIView *addButton; // @synthesize addButton=_addButton;
@property(readonly, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) double inputDelay; // @synthesize inputDelay=_inputDelay;
@property(nonatomic) int maxRecipients; // @synthesize maxRecipients=_maxRecipients;

@end
