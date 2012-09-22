/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface IUMediaEntitySpecifier : NSObject <NSCoding, NSCopying>
{
    NSString *_artist;
    struct CollectionPropertySpecifier _album;
    NSString *_genre;
    NSString *_composer;
    NSString *_podcast;
    NSString *_playlist;
    unsigned long long _itemPersistentID;
    unsigned long long _persistentPlaylistUID;
    unsigned int _compilation:1;
    unsigned int _albumIsAudioBook:1;
    unsigned int _albumIsITunesU:1;
    unsigned int _audibleAudioBook:1;
    int _movieEntityAllowedFileType;
}

+ (id)mediaQueryWithEntitiesOfType:(int)arg1 givenSpecifier:(id)arg2;
+ (id)mediaEntitySpecifierForMediaItem:(id)arg1;
+ (id)mediaEntitySpecifierWithPlaylistPersistentUID:(unsigned long long)arg1;
+ (id)mediaEntitySpecifierWithCompilationString:(id)arg1 baseMediaQuery:(id)arg2;
+ (id)_mediaEntitySpecifierWithArtist:(id)arg1 albumPID:(unsigned long long)arg2 baseMediaQuery:(id)arg3;
+ (id)mediaEntitySpecifierWithArtist:(id)arg1 albumString:(id)arg2 baseMediaQuery:(id)arg3;
+ (id)mediaEntitySpecifierForAudibleAudioBooks;
+ (id)mediaEntitySpecifierWithAudioBook:(id)arg1;
+ (id)mediaEntitySpecifierWithPodcast:(id)arg1;
+ (id)mediaEntitySpecifierForAlbumWithItemsQuery:(id)arg1;
+ (BOOL)isMediaEntityTypeGroupedByDefault:(int)arg1;
+ (void)initialize;
- (void)_lookupPlaylistNameIfNecessary;
@property(readonly, nonatomic) NSString *titleForDerivatives;
@property(readonly, nonatomic) unsigned long long specifiedPlaylistPersistentUID;
@property(readonly, nonatomic) BOOL hasAlbumSpecifier;
- (id)albumNameOfSpecifiedAlbum;
@property(readonly, nonatomic) NSString *playlistNameOfSpecifiedPlaylist;
@property(readonly, nonatomic) IUMediaEntitySpecifier *mediaEntitySpecifierByRemovingTopLevel;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)_initWithMediaQuery:(id)arg1;

@end
