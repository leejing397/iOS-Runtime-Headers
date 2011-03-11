/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSArray, UIToolbar, UITableView, <EKEventViewDelegate>, UIActionSheet, UIButton, NSString, EKEventDetailItem, EKEvent;

@interface EKEventViewController : UIViewController  {
    EKEvent *_event;
    NSString *_eventId;
    UIActionSheet *_alertSheet;
    int _pendingStatus;
    <EKEventViewDelegate> *_delegate;
    id _editor;
    UIButton *_responseButtons[3];
    UIToolbar *_buttonBar;
    int _lastOrientation;
    id _currentEditItem;
    UITableView *_tableView;
    unsigned int _didAppear : 1;
    unsigned int _autoPop : 1;
    unsigned int _allowsEditing : 1;
    unsigned int _allowsSubitems : 1;
    unsigned int _showsPreview : 1;
    unsigned int _forcePreview : 1;
    unsigned int _trustsStatus : 1;
    unsigned int _allowsInviteResponses : 1;
    unsigned int _showsAddToCalendar : 1;
    unsigned int _icsPreview : 1;
    unsigned int _needsReload : 1;
    NSArray *_items;
    NSArray *_currentSections;
    int _scrollToSection;
}

@property(retain) EKEvent * event;
@property BOOL allowsEditing;
@property BOOL allowsCalendarPreview;
@property(readonly) UITableView * tableView;
@property(retain) EKEventDetailItem * _currentEditItem;
@property <EKEventViewDelegate> * delegate;

+ (void)setDefaultDatesForEvent:(id)arg1;

- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)loadView;
- (void)viewDidLoad;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (id)event;
- (void)setEvent:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView;
- (BOOL)allowsEditing;
- (void)setAllowsEditing:(BOOL)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopoverView;
- (void)viewDidUnload;
- (void)accessibilityLargeTextDidChange;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setICSPreview:(BOOL)arg1;
- (void)setAllowsSubitems:(BOOL)arg1;
- (void)_localeChanged;
- (void)_configureItemsForStoreConstraintsGivenCalendar:(id)arg1;
- (void)setupForEvent;
- (void)_presentDetachSheet;
- (id)_currentEditItem;
- (BOOL)_shouldDisplayDoneButton;
- (void)_updateNavBarAnimated:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })_idealSize;
- (void)_pop;
- (BOOL)allowsSubitems;
- (BOOL)allowsCalendarPreview;
- (BOOL)alwaysShowsCalendarPreview;
- (void)setAlwaysShowsCalendarPreview:(BOOL)arg1;
- (BOOL)isICSPreview;
- (BOOL)showsAddToCalendar;
- (void)setShowsAddToCalendar:(BOOL)arg1;
- (void)completeWithAction:(int)arg1;
- (void)setScrollToSection:(int)arg1;
- (int)scrollToSection;
- (void)set_currentEditItem:(id)arg1;
- (void)_storeChanged:(id)arg1;
- (void)_setupAttendeesWithAcceptedItem:(id)arg1 declinedItem:(id)arg2 maybeItem:(id)arg3 noReplyItem:(id)arg4;
- (void)_updateFooterIfNeeded;
- (void)doneButtonPressed;
- (void)editEvent;
- (void)_markEventAsRead;
- (void)_saveStatus:(int)arg1 span:(int)arg2;
- (BOOL)_performSave:(int)arg1 animated:(BOOL)arg2;
- (void)_presentValidationAlert:(id)arg1;
- (void)_performDelete;
- (BOOL)_canDetachSingleOccurrence;
- (void)eventItemDidStartEditing:(id)arg1;
- (void)eventItemDidCommit:(id)arg1;
- (void)eventItemDidEndEditing:(id)arg1;
- (void)_dismissEditor:(BOOL)arg1;
- (void)_prepareEventForEdit;
- (void)invokeInviteAction:(int)arg1;
- (void)_deleteClicked:(id)arg1;
- (void)_addToCalendarClicked:(id)arg1;
- (void)_updateResponseVisibility;
- (void)_updateResponse;
- (void)_selectButtonWithTag:(int)arg1;
- (void)_acceptButtonPressed:(id)arg1;
- (void)_maybeButtonPressed:(id)arg1;
- (void)_declineButtonPressed:(id)arg1;
- (void)_responseChanged:(id)arg1;
- (void)setAllowsCalendarPreview:(BOOL)arg1;
- (void)reloadIfNeeded;
- (void)setNeedsReload;
- (id)_items;
- (id)initWithEvent:(id)arg1;

@end