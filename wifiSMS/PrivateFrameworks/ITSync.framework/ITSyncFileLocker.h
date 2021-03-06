/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/ITSync.framework/ITSync
 */



@interface ITSyncFileLocker : NSObject 
{
    NSUInteger _uid;
    id _delegate;
    unsigned int _exclusive : 1;
    unsigned int _needsDidAcquireCallback : 1;
}

+ (id)iTunesSyncingLockfilePath;
+ (void)_ensureLockFileParentDirectoryExists:(NSUInteger)arg1;
+ (BOOL)_acquireLock:(BOOL)arg1 sharedLock:(BOOL)arg2 instanceUID:(NSUInteger)arg3 threadArgs:(struct __CFDictionary { }*)arg4 notifyMainThreadIfAcquired:(BOOL)arg5;
+ (void)_blockingLockWasAcquired:(struct __CFDictionary { }*)arg1;

- (id)initWithDelegate:(id)arg1 lockfilePath:(id)arg2 useExclusiveLocks:(BOOL)arg3;
- (id)description;
- (void)clearDelegate;
- (void)_releaseLockNoSpinLock;
- (void)dealloc;
- (void)releaseLock;
- (void)_blockingLockWasAcquired;
- (BOOL)hasLock;
- (BOOL)acquireLockTryNow;
- (BOOL)acquireLockBlockingOnNewThreadIfNecessary;

@end
