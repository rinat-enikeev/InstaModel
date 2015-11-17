//
//  InstaPost.h
//  Pods
//
//  Created by Rinat Enikeev on 18/11/15.
//
//

#ifndef InstaPost_h
#define InstaPost_h

@import Foundation;
@import UIKit;

@protocol InstaUser;
@protocol InstaImage;
@protocol InstaTag;
@protocol InstaVideo;
@protocol InstaAttribution;
@protocol InstaUserOnPost;
@protocol InstaCaption;
@protocol InstaLocation;
@protocol InstaComment;

@protocol InstaPost <NSObject>

@property (nullable, nonatomic, retain, readonly) NSString *identifier;
@property (nullable, nonatomic, retain, readonly) InstaLocation *location;
@property (nullable, nonatomic, retain, readonly) NSNumber *commentsCount;
@property (nullable, nonatomic, retain, readonly) NSDate   *created;
@property (nullable, nonatomic, retain, readonly) NSString *filter;
@property (nullable, nonatomic, retain, readonly) NSNumber *likesCount;
@property (nullable, nonatomic, retain, readonly) NSString *link;
@property (nullable, nonatomic, retain, readonly) NSString *type;
@property (nullable, nonatomic, retain, readonly) NSNumber *userHasLiked;
@property (nullable, nonatomic, retain, readonly) NSNumber *distance;
@property (nullable, nonatomic, retain, readonly) InstaUser    *author;
@property (nullable, nonatomic, retain, readonly) InstaCaption *caption;
@property (nullable, nonatomic, retain, readonly) InstaImage   *imageLow;
@property (nullable, nonatomic, retain, readonly) InstaImage   *imageStd;
@property (nullable, nonatomic, retain, readonly) InstaImage   *imageThumb;
@property (nullable, nonatomic, retain, readonly) InstaVideo *videoLowBand;
@property (nullable, nonatomic, retain, readonly) InstaVideo *videoLowRes;
@property (nullable, nonatomic, retain, readonly) InstaVideo *videoStdRes;
@property (nullable, nonatomic, retain, readonly) InstaAttribution *attribution;
@property (nullable, nonatomic, retain, readonly) NSSet<InstaUser *> *likers;
@property (nullable, nonatomic, retain, readonly) NSSet<InstaTag *>  *tags;
@property (nullable, nonatomic, retain, readonly) NSSet<InstaUserOnPost *> *usersOnPost;
@property (nullable, nonatomic, retain, readonly) NSSet<InstaComment *> *comments;

@end


#endif /* InstaPost_h */
