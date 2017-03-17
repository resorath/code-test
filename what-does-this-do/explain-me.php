function _parse($item) {
  $options = array(
    'path' => NULL,
    'query' => array(),
    'fragment' => '',
  );

  if (!is_null($item)) return;

  if (strpos($item, '://') !== FALSE) {
    $parts = explode('?', $item);
    $options['path'] += $parts;

    $query_parts = explode('#', $parts[1]);
    parse_str($query_parts[0], $options['query']);
    $options['fragment'] = $query_parts[1];
  }
  else {
    $parts = parse_url('http://example.com/' . $item);
    $options['path'] = substr($parts['path'], 1);
    if (isset($parts['query'])) {
      parse_str($parts('query'), $options['query']);
    }
  }

  return $options;
}
