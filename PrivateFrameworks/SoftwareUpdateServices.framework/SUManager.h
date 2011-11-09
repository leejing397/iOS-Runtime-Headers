/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@class SUOperationProgress, <SUManagerDelegate>, NSMutableArray, NSTimer, SUDownload, SUState, SUScanOptions;

@interface SUManager : NSObject <SUNetworkObserver> {
    <SUManagerDelegate> *_delegate;
    SUState *_state;
    BOOL _foreground;
    SUScanOptions *_autoScanOptions;
    BOOL _scanning;
    NSMutableArray *_scanRequests;
    struct __MobileAsset { } *_assetToDownloadFromLastScan;
    BOOL _downloading;
    struct __MobileAsset { } *_downloadAsset;
    SUDownload *_download;
    SUOperationProgress *_downloadProgressSnapshot;
    NSTimer *_documentationDownloadTimer;
    BOOL _installing;
}

@property <SUManagerDelegate> * delegate;
@property(getter=isForeground) BOOL foreground;
@property(retain) SUState * state;
@property(retain) SUDownload * download;
@property(getter=isDownloading) BOOL downloading;
@property(getter=isScanning) BOOL scanning;
@property(getter=isInstalling) BOOL installing;
@property struct __MobileAsset { }* downloadAsset;
@property struct __MobileAsset { }* assetToDownloadFromLastScan;

+ (void)initialize;
+ (id)sharedInstance;

- (BOOL)isForeground;
- (BOOL)isDownloading;
- (void)setForeground:(BOOL)arg1;
- (struct __MobileAsset { }*)downloadAsset;
- (void)setDownload:(id)arg1;
- (BOOL)cancelDownload:(id*)arg1;
- (void)setDelegate:(id)arg1;
- (id)download;
- (void)setState:(id)arg1;
- (id)state;
- (id)delegate;
- (void)setDownloading:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)installUpdate:(id*)arg1;
- (void)_updateDownloadStatusForAssetState:(id)arg1;
- (BOOL)startDownload:(id*)arg1;
- (BOOL)updateDownloadMetadata:(id)arg1 error:(id*)arg2;
- (void)resumeDownload:(id*)arg1;
- (void)tryAutodownload;
- (void)autoScanAndDownloadIfAvailable:(int)arg1;
- (void)resumeOrResetIfNecessary;
- (void)operatorBundleChanged;
- (void)cellularRoamingStatusChanged:(BOOL)arg1;
- (void)setInstalling:(BOOL)arg1;
- (BOOL)isUpdateReadyForInstallation:(id*)arg1;
- (void)_downloadFinished;
- (void)_setVerifyExclusions:(id)arg1;
- (void)_snapshotProgress;
- (BOOL)_shouldSendUpdatedProgressToDelegate;
- (void)_updateNormalizedDownloadProgress;
- (void)_updateNormalizedDownloadProgressAndNotifyDelegate;
- (void)_notePhaseCompleted:(id)arg1;
- (BOOL)_reapplyExistingDownloadPolicyIfDownloadable:(BOOL)arg1;
- (id)_createDownloadFromDescriptor:(id)arg1 andMetadata:(id)arg2;
- (void)_cleanupPreviousDownload:(BOOL)arg1;
- (struct __MobileAsset { }*)assetToDownloadFromLastScan;
- (id)_downloadOptionsFromMetadata:(id)arg1;
- (int)_downloadPriority;
- (void)_updateLastSavedDownloadsMetadata:(id)arg1;
- (void)_downloadFailedWithError:(id)arg1;
- (void)_documentationDownloadTimeout:(id)arg1;
- (void)_invalidateDocumentationDownloadTimeoutTimer;
- (void)_scheduleDocumentationDownloadTimeoutTimer:(struct __MobileAsset { }*)arg1;
- (void)_scanAndDownloadDocumentation:(id)arg1 complete:(id)arg2;
- (void)_forceRefresh:(struct __MobileAsset { }*)arg1 localOnly:(BOOL)arg2 complete:(id)arg3;
- (void)_fetchDocumentationForDescriptor:(id)arg1 localOnly:(BOOL)arg2 complete:(id)arg3;
- (void)_doScan:(struct __MobileAsset { }*)arg1 localOnly:(BOOL)arg2 complete:(id)arg3;
- (void)notifyScanDidComplete:(id)arg1 error:(id)arg2;
- (void)notifyScanRequestDidFinish:(id)arg1 update:(id)arg2 error:(id)arg3;
- (void)setAssetToDownloadFromLastScan:(struct __MobileAsset { }*)arg1;
- (void)setScanning:(BOOL)arg1;
- (void)notifyScanRequestDidStart:(id)arg1;
- (BOOL)isScanning;
- (BOOL)_cancelDownload:(BOOL)arg1 error:(id*)arg2;
- (BOOL)isDownloadHalted;
- (void)endAutodownloadTasksAndResetState;
- (BOOL)_isDateWithinAutodownloadWifiWindow:(id)arg1;
- (void)_endAutodownloadTasksAndResetState:(BOOL)arg1;
- (void)_endOrRescheduleAutodownloadRetryInOneDay:(id)arg1;
- (BOOL)_isWithinAutodownloadWifiWindow;
- (void)noteAutodownloadFailedToStartWithError:(id)arg1;
- (BOOL)isInstalling;
- (void)scanForUpdates:(id)arg1 complete:(id)arg2;
- (void)_tryOrScheduleAutodownloadWithPolicy:(id)arg1 allowOneTimeRetry:(BOOL)arg2;
- (void)_cleanupPreviousDownload;
- (BOOL)startDownloadWithMetadata:(id)arg1 error:(id*)arg2;
- (BOOL)_doAutodownload:(id)arg1 error:(id*)arg2;
- (void)_startOrResumeDownload:(BOOL)arg1;
- (void)_verifyAndPrepareUpdate;
- (void)setDownloadAsset:(struct __MobileAsset { }*)arg1;
- (void)_resumeFromLastKnownState;
- (BOOL)_updateMobileAssetDownloadOptions:(id)arg1;
- (void)_setupManualDownloadPolicyPeriodIfNecessary:(id)arg1 fromDate:(id)arg2 save:(BOOL)arg3;
- (void)_autoDownloadWiFiPeriodDidEnd;

@end