/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSDictionary;



@interface ASParseRule : NSObject 
{
    NSInteger _minimumNumber;
    NSInteger _maximumNumber;
    NSInteger _codePage;
    NSInteger _token;
    Class _objectClass;
    SEL _setterMethod;
    NSInteger _collectionClassType;
    NSDictionary *_subclassRuleSet;
    NSDictionary *_callbackDict;
    NSDictionary *_streamCallbackDict;
}


- (id)initWithMinimumNumber:(NSInteger)arg1 maximumNumber:(NSInteger)arg2 codePage:(NSInteger)arg3 token:(NSInteger)arg4 objectClass:(Class)arg5 setterMethod:(SEL)arg6 collectionClassType:(NSInteger)arg7 callbackDict:(id)arg8 streamCallbackDict:(id)arg9 subclassRuleSet:(id)arg10;
- (void)dealloc;
- (NSInteger)minimumNumber;
- (NSInteger)maximumNumber;
- (NSInteger)codePage;
- (NSInteger)token;
- (Class)objectClass;
- (SEL)setterMethod;
- (NSInteger)collectionClassType;
- (id)callbackDict;
- (id)streamCallbackDict;
- (id)subclassRuleSet;

@end
