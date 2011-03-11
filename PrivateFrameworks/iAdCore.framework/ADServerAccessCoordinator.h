/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSTimer;

@interface ADServerAccessCoordinator : NSObject  {
    BOOL _allowsRequests;
    BOOL _networkAvailable;
    BOOL _serverReachabile;
    BOOL _clientBackgrounded;
    double _currentBackoffIntervalExponent;
    NSTimer *_retryTimer;
}

@property(readonly) double nextBackoffInterval;
@property(retain) NSTimer * retryTimer;
@property(readonly) double currentBackoffIntervalExponent;
@property(readonly) BOOL clientBackgrounded;
@property(readonly) BOOL serverReachabile;
@property(readonly) BOOL networkAvailable;
@property BOOL allowsRequests;


- (BOOL)serverReachabile;
- (void)networkAvailabilityChanged:(BOOL)arg1;
- (void)recalculate;
- (void)setAllowsRequests:(BOOL)arg1;
- (double)nextBackoffInterval;
- (void)setRetryTimer:(id)arg1;
- (void)retryTimerDidFire:(id)arg1;
- (id)retryTimer;
- (double)currentBackoffIntervalExponent;
- (BOOL)clientBackgrounded;
- (BOOL)networkAvailable;
- (void)serverReachabilityChanged:(BOOL)arg1;
- (id)serverError;
- (void)connectionDidSucceed;
- (void)clientApplicationWillEnterForeground;
- (void)clientApplicationDidEnterBackground;
- (BOOL)allowsRequests;
- (void)errorDidOccur:(int)arg1;
- (void)reset;
- (id)init;
- (void)dealloc;

@end