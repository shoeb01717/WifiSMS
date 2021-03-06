/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSArray, NSString, NSMutableData, ActivityMonitor;



@interface DAMailAccountSyncConsumer : DAMailAccountConsumer <DAMailboxRequestConsumer, DAMailboxStreamingContentConsumer>
{
    NSArray *requests;
    NSArray *consumers;
    NSString *tag;
    NSString *accountID;
    BOOL receivedFirstItem;
    BOOL moreAvailable;
    BOOL firstSyncBatch;
    NSInteger syncKeyResets;
    NSInteger serverErrors;
    id _streamConsumer;
    ActivityMonitor *monitor;
    NSMutableData *bodyData;
}

@property(retain) id streamConsumer; /* unknown property attribute: V_streamConsumer */


- (void)reset;
- (void)setTag:(id)arg1;
- (id)originalThreadMonitor;
- (id)initWithCurrentTag:(id)arg1 andAccountID:(id)arg2;
- (id)actionsConsumer;
- (void)partialResultsForMailbox:(id)arg1 actions:(id)arg2 responses:(id)arg3 percentComplete:(double)arg4 moreAvailable:(BOOL)arg5;
- (void)resultsForMailbox:(id)arg1 newTag:(id)arg2 actions:(id)arg3 responses:(id)arg4 percentComplete:(double)arg5 moreAvailable:(BOOL)arg6;
- (BOOL)shouldBeginStreamingForMailMessage:(id)arg1 format:(NSInteger)arg2;
- (void)consumeData:(char *)arg1 length:(NSInteger)arg2 format:(NSInteger)arg3 mailMessage:(id)arg4;
- (void)didEndStreamingForMailMessage:(id)arg1;
- (void)actionFailed:(NSInteger)arg1 forTask:(id)arg2 error:(id)arg3;
- (void)dealloc;
- (id)streamConsumer;
- (void)setStreamConsumer:(id)arg1;

@end
