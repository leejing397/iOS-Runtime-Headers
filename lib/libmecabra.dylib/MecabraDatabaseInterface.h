/* Generated by RuntimeBrowser
   Image: /usr/lib/libmecabra.dylib
 */

@class NSMutableDictionary;

@interface MecabraDatabaseInterface : NSObject <MecabraDatabaseAccessProtocol> {
    NSMutableDictionary *_databaseControllers;
}

@property(retain) NSMutableDictionary * databaseControllers;

- (void)addEntry:(id)arg1 type:(id)arg2 URL:(id)arg3 reply:(id)arg4;
- (void)addEntry:(id)arg1 type:(id)arg2 URL:(id)arg3;
- (unsigned int)addEntryWithReturnedIdentifier:(id)arg1 type:(id)arg2 URL:(id)arg3;
- (void)clearStoredMergeEntriesForType:(id)arg1 URL:(id)arg2;
- (id)coreDataControllerForType:(id)arg1 URL:(id)arg2;
- (id)databaseControllers;
- (void)deleteAllMatchingEntries:(id)arg1 type:(id)arg2 URL:(id)arg3;
- (void)deleteEntry:(id)arg1 type:(id)arg2 URL:(id)arg3;
- (id)entriesToMergeForType:(id)arg1 URL:(id)arg2;
- (void)readEntriesForType:(id)arg1 URL:(id)arg2 entry:(id)arg3 reply:(id)arg4;
- (id)readEntriesForType:(id)arg1 URL:(id)arg2 entry:(id)arg3;
- (void)readPropertyForType:(id)arg1 URL:(id)arg2 propertyKey:(id)arg3 reply:(id)arg4;
- (id)readPropertyForType:(id)arg1 URL:(id)arg2 propertyKey:(id)arg3;
- (void)refreshForType:(id)arg1 URL:(id)arg2;
- (id)removeDuplicatesForEntry:(id)arg1 type:(id)arg2 URL:(id)arg3 uniquingKeys:(id)arg4 sortDescriptors:(id)arg5 restrictToNumberOfElements:(unsigned int)arg6 identifierKey:(id)arg7;
- (void)saveForType:(id)arg1 URL:(id)arg2;
- (void)setDatabaseControllers:(id)arg1;
- (void)setDatabaseNumberProperty:(id)arg1 forKey:(id)arg2 type:(id)arg3 URL:(id)arg4;
- (void)setDatabaseStringProperty:(id)arg1 forKey:(id)arg2 type:(id)arg3 URL:(id)arg4;
- (void)setNumberValue:(id)arg1 forKey:(id)arg2 entry:(id)arg3 type:(id)arg4 URL:(id)arg5;
- (void)setStringValue:(id)arg1 forKey:(id)arg2 entry:(id)arg3 type:(id)arg4 URL:(id)arg5;
- (id)setValuesForEntry:(id)arg1 uniquingKeys:(id)arg2 type:(id)arg3 URL:(id)arg4;

@end