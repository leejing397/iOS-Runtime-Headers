/* Generated by RuntimeBrowser.
 */

@protocol TUStatusBarManagerDelegate <NSObject>

@required

- (void)clearStatusBarInCallStateForStatusBarManager:(TUStatusBarManager *)arg1;
- (int)currentStatusBarStyleOverridesForStatusBarManager:(TUStatusBarManager *)arg1;
- (void)statusBarManager:(TUStatusBarManager *)arg1 setDoubleHeightStatusString:(NSString *)arg2 forStyle:(int)arg3;
- (void)statusBarManager:(TUStatusBarManager *)arg1 setStyleOverrides:(int)arg2;

@end