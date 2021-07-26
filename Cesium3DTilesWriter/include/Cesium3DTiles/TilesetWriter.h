// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "WriterLibrary.h"

#include <Cesium3DTiles/Tileset.h>

#include <CesiumJsonWriter/JsonWriter.h>

namespace Cesium3DTiles {

void writeAsset(const Asset& obj, CesiumJsonWriter::JsonWriter& jsonWriter);
void writeBoundingVolume(
    const BoundingVolume& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter);
void writeContent(const Content& obj, CesiumJsonWriter::JsonWriter& jsonWriter);
void writeTile(const Tile& obj, CesiumJsonWriter::JsonWriter& jsonWriter);
void writeTilesetProperties(
    const TilesetProperties& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter);
void writeTileset(const Tileset& obj, CesiumJsonWriter::JsonWriter& jsonWriter);

} // namespace Cesium3DTiles