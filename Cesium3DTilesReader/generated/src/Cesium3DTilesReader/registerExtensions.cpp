// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!

#include "Cesium3DTilesReader/registerExtensions.h"

#include <Cesium3DTiles/BoundingVolume.h>
#include <Cesium3DTiles/Tile.h>
#include <Cesium3DTiles/Tileset.h>
#include <Cesium3DTilesReader/Extension3dTilesBoundingVolumeS2JsonHandler.h>
#include <Cesium3DTilesReader/Extension3dTilesContentGltfJsonHandler.h>
#include <Cesium3DTilesReader/Extension3dTilesImplicitTilingJsonHandler.h>
#include <CesiumJsonReader/ExtensionReaderContext.h>

namespace Cesium3DTilesReader {

void registerExtensions(CesiumJsonReader::ExtensionReaderContext& context) {
  (void)context;
  context.registerExtension<
      Cesium3DTiles::Tileset,
      Extension3dTilesContentGltfJsonHandler>();
  context.registerExtension<
      Cesium3DTiles::BoundingVolume,
      Extension3dTilesBoundingVolumeS2JsonHandler>();
  context.registerExtension<
      Cesium3DTiles::Tile,
      Extension3dTilesImplicitTilingJsonHandler>();
}
} // namespace Cesium3DTilesReader