/**
 * @file /ecto/include/ecto/impl/graph_utils.hpp
 * 
 * @brief Short description of this file.
 **/
/*****************************************************************************
** Ifdefs
*****************************************************************************/

#ifndef ecto_GRAPH_UTILS_HPP_
#define ecto_GRAPH_UTILS_HPP_

/*****************************************************************************
** Includes
*****************************************************************************/

#include <string>
#include "graph_types.hpp"

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace ecto {
namespace graph {

/*****************************************************************************
** Interfaces
*****************************************************************************/

std::set<std::string> get_connected_input_tendril_names(graph_t& graph, graph_t::vertex_descriptor vd);
void move_inputs(graph_t& graph, graph_t::vertex_descriptor vd);
void move_outputs(graph_t& graph, graph_t::vertex_descriptor vd);
void invoke_configuration(graph_t& graph, graph_t::vertex_descriptor vd);
int invoke_process(graph_t& graph, graph_t::vertex_descriptor vd);

} // namespace graph
} // namespace ecto

#endif /* ecto_GRAPH_UTILS_HPP_ */
