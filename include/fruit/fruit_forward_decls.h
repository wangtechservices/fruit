/*
 * Copyright 2014 Google Inc. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FRUIT_FRUIT_FORWARD_DECLS_H
#define FRUIT_FRUIT_FORWARD_DECLS_H

// This header contains forward declarations of all types in the `fruit' namespace.
// Avoid writing forward declarations yourself; use this header instead.

namespace fruit {

// Used to group the requirements of Component. See Component for details.
// Note: this type is never defined, that's by design since instances of this type are not meaningful.
template <typename... Types>
struct Required;

// Used to annotate T as a type that uses assisted injection. See PartialComponent for details.
// Note: this type is never defined, that's by design since objects of this type are not meaningful.
template <typename T>
struct Assisted;

// Used to annotate T (for annotated injection). See PartialComponent for details.
// Note: this type is never defined, that's by design since objects of this type are not meaningful.
template <typename Annotation, typename T>
struct Annotated;

template <typename... Types>
class Component;

template <typename Comp>
class PartialComponent;

template <typename... Types>
class NormalizedComponent;

template <typename C>
class Provider;

template <typename... P>
class Injector;

} // namespace fruit

#endif // FRUIT_FRUIT_FORWARD_DECLS_H
