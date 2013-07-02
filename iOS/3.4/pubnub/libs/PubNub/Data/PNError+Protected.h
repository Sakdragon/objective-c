//
//  PNError+Protected.h
//  pubnub
//
//  Created by Sergey Mamontov on 01/08/13.
//
//

#import "PNError.h"


#pragma mark Protected interface methods

@interface PNError (Protected)

// Stores reference on associated object with which
// error is occurred
@property (nonatomic, strong) id associatedObject;

#pragma mark -

#pragma mark - Instance methods

/**
 * Force PNError to change it's associated object to new one
 */
- (void)updateAssociatedObject:(id)associatedObject;

#pragma mark -


@end
