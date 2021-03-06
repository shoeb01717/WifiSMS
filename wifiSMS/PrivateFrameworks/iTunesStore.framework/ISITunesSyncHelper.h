/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSLock, NSDate;



@interface ISITunesSyncHelper : NSObject <ISSingleton>
{
    NSInteger _blockSyncCount;
    BOOL _checkedForPurchases;
    NSLock *_lock;
    NSDate *_preSyncCheckForPurchasesDate;
    unsigned int _syncRequested : 1;
    unsigned int _waitingForLock : 1;
}

@property(readonly) BOOL iTunesIsSynching;
@property(getter=isBlockingSync,readonly) BOOL blockingSync;
@property BOOL iTunesCheckedForPurchasesDuringSync; /* unknown property attribute: V_checkedForPurchases */

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)beginBlockingSync;
- (void)endBlockingSync;
- (BOOL)isBlockingSync;
- (BOOL)iTunesIsSynching;
- (void)iTunesSyncHasBeenBlocked;
- (void)iTunesSyncHasCompleted:(NSInteger)arg1;
- (void)iTunesSyncRequestedStart;
- (id)_copyLastCheckForPurchasesDate;
- (void)_syncDidEndWithReason:(NSInteger)arg1;
- (void)_unblockSyncIfPossible;
- (BOOL)iTunesCheckedForPurchasesDuringSync;
- (void)setITunesCheckedForPurchasesDuringSync:(BOOL)arg1;

@end
