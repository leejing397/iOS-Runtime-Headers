/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LimitAdTracking.framework/LimitAdTracking
 */

@interface ADOptInStatusClient : NSObject

+ (id)sharedInstance;

- (id)advertisingIdentifier;
- (void)advertisingIdentifierChanged:(id /* block */)arg1;
- (void)clearAdvertisingIdentifier;
- (void)refreshOptInStatus;
- (void)refreshOptInStatusRefreshingWeakToken:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setOptInStatus:(bool)arg1 completionHandler:(id /* block */)arg2;

@end