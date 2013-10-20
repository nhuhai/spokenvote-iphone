//
//  Vote.h
//  Spokenvote
//
//  Created by Hai Nguyen on 10/11/13.
//  Copyright (c) 2013 Spokenvote. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Vote : NSObject

@property (nonatomic, strong) NSString *comment;
@property (nonatomic, strong) NSNumber *vote_id;
@property (nonatomic, strong) NSString *username;
@property (nonatomic, strong) NSString *created_at;
@property (nonatomic, strong) NSString *facebook_auth;

// Designated Initializer
- (id) initWithId: (NSNumber *) id;
+ (id) voteWithId:(NSNumber*) id;

@end

